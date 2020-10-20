import { BrowserRouter, Switch, Route } from "react-router-dom"
import home from "./pages/home.js"
import blog from "./pages/blog.js"
import React from 'react';

function App() {
  return (
   // <h1> APP JS Here </h1>
    <BrowserRouter>
      <Switch>
        <Route exact path = "/" component = {home} />
        <Route exact path = "/blog" component = {blog} />
        </Switch>
      </BrowserRouter>
);
}

export default App;
