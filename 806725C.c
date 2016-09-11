signed int __fastcall s6F_multichoice(int a1)
{
  _BYTE *v1; // r2@1
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r3@1
  int v5; // r2@1
  int v6; // r4@1
  int v7; // r3@1
  signed int result; // r0@2

  v1 = *(_BYTE **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  v4 = (int)(v1 + 1);
  *(_DWORD *)(a1 + 8) = v1 + 1;
  v5 = v1[1];
  v6 = v4 + 1;
  *(_DWORD *)(a1 + 8) = v4 + 1;
  v7 = *(_BYTE *)(v4 + 1);
  *(_DWORD *)(a1 + 8) = v6 + 1;
  if ( (Multichoice(v2, v3, v5, v7) & 0xFF) == 1 )
  {
    sub_80655F0();
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
