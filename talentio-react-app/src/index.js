import React from 'react';
import ReactDOM  from 'react-dom/client';
import './index.css'

class Talentio extends React.Component{
  render(){
    return( // return a HTML element
      <div>Hello {this.props.name} lives in {this.props.location}</div>
    );
  }
}

const root = ReactDOM.createRoot(document.getElementById("root"));
root.render(<Talentio name="Himanshu" location="Dehradun"/>)