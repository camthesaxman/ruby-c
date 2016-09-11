int __fastcall AffineAnimCmd_jump(unsigned __int8 a1, int a2)
{
  int v2; // r5@1
  _BYTE *v3; // r4@1
  int v5; // [sp+0h] [bp-18h]@1
  char v6; // [sp+5h] [bp-13h]@1
  int v7; // [sp+14h] [bp-4h]@1

  v2 = a1;
  v3 = &sAffineAnimStates[12 * a1];
  v3[1] = *(_WORD *)(8 * v3[1] + *(_DWORD *)(4 * *v3 + *(_DWORD *)(a2 + 16)) + 2);
  GetAffineAnimFrame(a1, a2, &v5);
  ApplyAffineAnimFrame(v2, &v5);
  v3[2] = v6;
  return v7;
}
