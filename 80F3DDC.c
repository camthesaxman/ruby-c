int __fastcall sub_80F3DDC(int a1)
{
  int v1; // r1@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 60 )
  {
    *(_WORD *)(v1 + 48) = 0;
    sub_80F3F20(*(_WORD *)(v1 + 50) & 0xFF, 0);
  }
  return v4;
}
