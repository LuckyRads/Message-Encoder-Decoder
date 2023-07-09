import { Route, Routes } from "react-router-dom";
import "./App.css";
import Conversation from "./pages/Conversations/Conversation";

function App() {
    return (
        <div className="App">
            <Routes>
                {/* <Route path="/" element={<Home />} /> */}
                <Route path="/conversations" element={<Conversation />}></Route>
            </Routes>
        </div>
    );
}

export default App;
