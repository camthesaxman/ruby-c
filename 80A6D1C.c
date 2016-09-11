signed int sub_80A6D1C()
{
  int v0; // r0@3

  HideMapNamePopUpWindow();
  if ( !v2025BCA )
    goto _080A6D84;
  if ( (unsigned __int8)sub_80A92D4(v2025BCA, 1) != 1 )
  {
    v2025BCA = 0;
_080A6D84:
    script_env_1_execute_new_script((int)&Event_NoRegisteredItem);
    return 1;
  }
  script_env_2_enable();
  player_bitmagic();
  sub_80594C0();
  sub_80597F4();
  v203855E = v2025BCA;
  v0 = itemid_get_overworld_function(v2025BCA);
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask(v0, 8) + 3]) = 1;
  return 1;
}
