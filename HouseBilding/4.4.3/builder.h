#pragma once

class Builder {
public:
    void HoldDoor() const {
        // ������ ������ ����� 100 �������� ������
        int i = 100;
        while (0 != i) {
            i--;
        }
    }
};