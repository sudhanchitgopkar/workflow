import re

f = open("agen.txt", "r")
prevtag = "XYXYX"

for line in f:
    line = line[:-1]        # truncate the new line
    if line[:4] == "Week":
        print line
        prevtag = "XYXYX"
        continue
    if line[:1] != " ":
        print "\n\n\n-------------------------------------------------"
        print line
        continue
    if line[14:16] == "In":
        continue
    item = line[26:]
    timelabel = line[14:25]
    if timelabel == "Scheduled: ":
        timelabel = ""
    if timelabel == "Deadline:  ":
        continue

    todo = re.search('^TODO (.*?)$', item)
    if todo:
        item = todo.group(1)

    thistag = ""
    tagged = re.search('^(.*?)\s*:(.*?):', item)
    if tagged:
        item = tagged.group(1)
        thistag = tagged.group(2)

    if thistag != prevtag:
        print "\n\n", thistag
        prevtag = thistag
    print "[ ] %s %s"  %  (timelabel, item)
