int __fastcall sub_81407B8(int a1)
{
  int v1; // r2@1
  signed int v2; // r1@1
  _WORD *v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += *(_WORD *)(a1 + 36);
  *(_WORD *)(a1 + 34) += *(_WORD *)(a1 + 38);
  *(_WORD *)(a1 + 38) = 0;
  *(_WORD *)(a1 + 36) = 0;
  v2 = 5;
  v3 = (_WORD *)(a1 + 56);
  do
  {
    *v3 = 0;
    --v3;
    --v2;
  }
  while ( v2 >= 0 );
  *(_DWORD *)(v1 + 28) = sub_81407F4;
  return v5;
}
