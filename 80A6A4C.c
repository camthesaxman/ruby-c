int __fastcall sub_80A6A4C(unsigned __int8 a1)
{
  int *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  dword_300485C = (int)sub_813A0F8;
  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 12) = (unsigned int)c2_exit_to_overworld_2_switch >> 16;
  *((_WORD *)v1 + 13) = (unsigned int)c2_exit_to_overworld_2_switch;
  sub_80A5AE4(a1);
  return v3;
}
