int __fastcall sub_80A2B40(int a1)
{
  int v1; // r3@1
  _WORD *v2; // r1@1
  signed int v3; // r2@1
  signed int v4; // r2@3
  int v5; // r4@3
  _BYTE *v6; // r0@5
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (_WORD *)a1;
  v3 = 8;
  do
  {
    *v2;
    *v2 = -1;
    ++v2;
    --v3;
  }
  while ( v3 >= 0 );
  v4 = 0;
  v5 = a1 + 18;
  do
  {
    *(_BYTE *)(v5 + v4);
    *(_BYTE *)(v5 + v4++) = -1;
  }
  while ( v4 <= 7 );
  v6 = (_BYTE *)(a1 + 29);
  do
    *v6-- = 0;
  while ( (signed int)v6 >= v1 + 26 );
  *(_WORD *)(v1 + 30) = 1;
  *(_WORD *)(v1 + 32) = 0;
  return v8;
}
