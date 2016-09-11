_BOOL4 __fastcall sub_80FFBDC(int a1, _BYTE *a2)
{
  _BYTE *v2; // r5@1
  unsigned __int8 v3; // r6@1
  unsigned int v4; // r0@1
  unsigned int v5; // r4@1

  v2 = a2;
  v3 = a1;
  v4 = a1 << 24;
  v5 = v4 >> 24;
  return (unsigned __int8)sub_8057274(BYTE3(v4)) != 1
      && (*v2 == 33 && (unsigned __int8)sub_8057300(v5) == 1 || sub_805729C(v3) << 24);
}
