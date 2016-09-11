int __fastcall sub_800B458(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int *v4; // r1@1
  int v6; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4000050 = 592;
  v4000052 = 16;
  v4000054 = 0;
  HIWORD(dword_3004B20[10 * a1 + 4]) = 0;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_800B3EC, 0)];
  *((_WORD *)v4 + 4) = v2;
  *((_WORD *)v4 + 5) = 16;
  *((_WORD *)v4 + 6) = 0;
  *((_WORD *)v4 + 7) = v3;
  *((_WORD *)v4 + 8) = v3;
  return v6;
}
