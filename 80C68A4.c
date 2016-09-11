int __fastcall sub_80C68A4(__int16 a1, __int16 a2, __int16 a3)
{
  __int16 v3; // r4@1
  __int16 v4; // r5@1
  __int16 v5; // r6@1
  int *v6; // r1@1
  int v8; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_80C68EC, 0)];
  *((_WORD *)v6 + 4) = v3;
  *((_WORD *)v6 + 5) = v4;
  *((_WORD *)v6 + 6) = v5;
  *((_WORD *)v6 + 7) = 0;
  *((_WORD *)v6 + 8) = 1;
  return v8;
}
