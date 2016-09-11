int __fastcall sub_8041324(int a1, int a2, _BYTE *a3)
{
  int v3; // r9@1
  int v4; // r10@1
  int v5; // r7@1
  unsigned int v6; // r5@1
  int v7; // r6@1
  unsigned int v8; // r1@3
  _WORD *v9; // r0@4
  int v11; // [sp+1Ch] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v7 = a2 + 116;
  do
  {
    if ( !GetBoxMonData((unsigned int *)(v3 + 80 * v6), 11, a3)
      || (v5 = (v5 + 1) & 0xFF, (v8 = GetBoxMonData((unsigned int *)(v3 + 80 * v6), 12, a3)) != 0) )
    {
      v9 = (_WORD *)(v7 + 2 * v6);
      LOWORD(v8) = 1;
    }
    else
    {
      v9 = (_WORD *)(v7 + 2 * v6);
    }
    *v9 = v8;
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 1 );
  *(_DWORD *)(v4 + 112) = v5;
  return v11;
}
