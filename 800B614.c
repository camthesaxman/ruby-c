int __fastcall sub_800B614(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int *v4; // r1@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_800B5A8, 0)];
  *((_WORD *)v4 + 4) = v2;
  *((_WORD *)v4 + 5) = 0;
  *((_WORD *)v4 + 6) = 8;
  *((_WORD *)v4 + 7) = v3;
  *((_WORD *)v4 + 8) = v3;
  return v6;
}
