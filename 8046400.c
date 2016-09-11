int __fastcall sub_8046400(__int16 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  __int16 v3; // r5@1
  int *v4; // r1@1

  v2 = a1;
  v3 = a2;
  v2024E6D = 1;
  *(_BYTE *)(12 * v2024A60 + 0x2017810) |= 8u;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_8046464, 5)];
  *((_WORD *)v4 + 5) = v2;
  *((_WORD *)v4 + 6) = v3;
  *((_WORD *)v4 + 7) = v2024A60;
  return 0;
}
