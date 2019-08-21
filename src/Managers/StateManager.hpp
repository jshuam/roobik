#include <memory>
#include <vector>

#include "States/StateBase.hpp"

namespace rbk
{
class StateManager
{
public:
    void addState(std::unique_ptr<StateBase>&& state);

    inline bool hasState() const { return states.size() != 0; }
    inline const std::unique_ptr<StateBase>& currentState() const { return states.front(); }

private:
    std::vector<std::unique_ptr<StateBase>> states;
};
}