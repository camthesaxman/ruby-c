int __fastcall sub_80E388C(unsigned __int8 a1)
{
  int v1; // r5@1
  __int16 v2; // r6^2@1
  int *v3; // r4@1
  unsigned __int16 v4; // r6@1
  int v6; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned int)sub_80792C0(1u, 1u, 1u, 1u) >> 16;
  ((void (*)(void))sub_80E39BC)();
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 18) = v2;
  v4 = sub_80791A8(1, 0, 0, 0, 0, 0, 0);
  sub_80E39BC(v4);
  *((_WORD *)v3 + 19) = v4;
  *((_WORD *)v3 + 4) = 0;
  *((_WORD *)v3 + 5) = 0;
  *v3 = (int)sub_80E38F8;
  return v6;
}
