int __fastcall sub_80842C8(int a1, unsigned __int8 a2)
{
  int v2; // r5@1
  __int16 v3; // r4@1
  int *v4; // r1@1
  int v6; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_808433C, 80)];
  *((_WORD *)v4 + 5) = HIWORD(v2);
  *((_WORD *)v4 + 6) = v2;
  *((_WORD *)v4 + 7) = v3;
  return v6;
}
