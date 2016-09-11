int __fastcall sub_80C9C7C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@2
  int v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)IsPlayerFacingPlantedBerryTree() == 1 )
  {
    dword_3005D00 = (int)sub_80C9D00;
    dword_300485C = (int)sub_80A5CC4;
    v2 = &dword_3004B20[10 * v1];
    *((_WORD *)v2 + 12) = (unsigned int)c2_exit_to_overworld_2_switch >> 16;
    *((_WORD *)v2 + 13) = (unsigned int)c2_exit_to_overworld_2_switch;
    *v2 = (int)sub_80A5B00;
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  }
  else
  {
    v3 = itemid_get_overworld_function(v203855E);
    call_via_r1(v1, v3);
  }
  return v5;
}
