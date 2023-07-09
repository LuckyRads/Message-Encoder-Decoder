import { Route, Routes } from "react-router-dom";
import "./App.css";
import Conversation from "./pages/Conversations/Conversation";

function App() {
    return (
        <>
            <Routes>
                {/* <Route path="/" element={<Home />} /> */}
                <Route path="/conversations" element={Conversation}></Route>
            </Routes>
            <div className="App">Client is up.</div>
        </>
    );
}

export default App;
