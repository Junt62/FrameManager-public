#include "ModeByParams.hpp"


PF_Err ModeIsHuman(PF_InData* in_data) {
    PF_Err err = PF_Err_NONE;
    err = ParamsIsVisable(DISK_HUMAN_ACTION, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION, false, in_data);
    err = ParamsIsVisable(DISK_ORIANTION, true, in_data);
    err = ParamsIsVisable(DISK_SKILL_INTERVAL, false, in_data);
    err = ParamsIsVisable(DISK_SPEED, true, in_data);
    err = ParamsIsVisable(DISK_TOPIC_HUMAN_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_5, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_6, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_7, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_8, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_9, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_A, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_B, false, in_data);
    err = ParamsIsVisable(DISK_TOPIC_MONSTER_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_5, false, in_data);
    return err;
}


PF_Err ModeIsHumanFrame(PF_InData* in_data) {
    PF_Err err = PF_Err_NONE;
    err = ParamsIsVisable(DISK_HUMAN_ACTION, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION, false, in_data);
    err = ParamsIsVisable(DISK_ORIANTION, true, in_data);
    err = ParamsIsVisable(DISK_SKILL_INTERVAL, false, in_data);
    err = ParamsIsVisable(DISK_SPEED, true, in_data);
    err = ParamsIsVisable(DISK_TOPIC_HUMAN_FRAME_START, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_1, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_2, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_3, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_4, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_5, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_6, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_7, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_8, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_9, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_A, true, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_B, true, in_data);
    err = ParamsIsVisable(DISK_TOPIC_MONSTER_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_5, false, in_data);
    return err;
}


PF_Err ModeIsMonster(PF_InData* in_data) {
    PF_Err err = PF_Err_NONE;
    err = ParamsIsVisable(DISK_HUMAN_ACTION, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION, true, in_data);
    err = ParamsIsVisable(DISK_ORIANTION, true, in_data);
    err = ParamsIsVisable(DISK_SKILL_INTERVAL, false, in_data);
    err = ParamsIsVisable(DISK_SPEED, true, in_data);
    err = ParamsIsVisable(DISK_TOPIC_HUMAN_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_5, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_6, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_7, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_8, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_9, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_A, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_B, false, in_data);
    err = ParamsIsVisable(DISK_TOPIC_MONSTER_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_5, false, in_data);
    return err;
}


PF_Err ModeIsMonsterFrame(PF_InData* in_data) {
    PF_Err err = PF_Err_NONE;
    err = ParamsIsVisable(DISK_HUMAN_ACTION, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION, true, in_data);
    err = ParamsIsVisable(DISK_ORIANTION, true, in_data);
    err = ParamsIsVisable(DISK_SKILL_INTERVAL, false, in_data);
    err = ParamsIsVisable(DISK_SPEED, true, in_data);
    err = ParamsIsVisable(DISK_TOPIC_HUMAN_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_5, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_6, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_7, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_8, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_9, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_A, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_B, false, in_data);
    err = ParamsIsVisable(DISK_TOPIC_MONSTER_FRAME_START, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_1, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_2, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_3, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_4, true, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_5, true, in_data);
    return err;
}


PF_Err ModeIsSkill(PF_InData* in_data) {
    PF_Err err = PF_Err_NONE;
    err = ParamsIsVisable(DISK_HUMAN_ACTION, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION, false, in_data);
    err = ParamsIsVisable(DISK_ORIANTION, true, in_data);
    err = ParamsIsVisable(DISK_SKILL_INTERVAL, true, in_data);
    err = ParamsIsVisable(DISK_SPEED, true, in_data);
    err = ParamsIsVisable(DISK_TOPIC_HUMAN_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_5, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_6, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_7, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_8, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_9, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_A, false, in_data);
    err = ParamsIsVisable(DISK_HUMAN_ACTION_FRAME_B, false, in_data);
    err = ParamsIsVisable(DISK_TOPIC_MONSTER_FRAME_START, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_1, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_2, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_3, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_4, false, in_data);
    err = ParamsIsVisable(DISK_MONSTER_ACTION_FRAME_5, false, in_data);
    return err;
}