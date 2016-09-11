int __fastcall CheckMovementInputAcroBikeUnknownMode5(int a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // r8@1
  unsigned __int16 v4; // r4@1
  unsigned __int16 v5; // r5@1
  int *v6; // r0@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &dword_30048A0[9 * v202E85D];
  *((_BYTE *)v6 + 1) &= 0xFDu;
  FieldObjectSetDirection((int)v6, *((_BYTE *)v6 + 24) & 0xF);
  v202E860 = 0;
  return (unsigned __int8)CheckMovementInputAcroBike(v3, v4, v5);
}
