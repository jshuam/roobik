#include <memory>
#include <stack>

#include "States/StateBase.hpp"

namespace rbk
{
class StateManager
{
public:
    static void addState(std::unique_ptr<StateBase>&& state);

    static inline const std::unique_ptr<StateBase>& currentState() { return states.top(); }
    static inline bool hasState() { return states.size() != 0; }
    static inline void popState() { states.pop(); }

private:
    static std::stack<std::unique_ptr<StateBase>> states;
};
}