int __fastcall FieldObjectCB_Hidden1(int a1)
{
  int v1; // r3@1
  int *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 60) )
  {
    v2 = &dword_30048A0[9 * *(_WORD *)(a1 + 46)];
    *((_BYTE *)v2 + 3) |= 4u;
    *(_BYTE *)(v1 + 66) = *(_BYTE *)(v1 + 66) & 0x3F | 0x80;
    *(_BYTE *)(v1 + 5) |= 0xCu;
    ++*(_WORD *)(v1 + 60);
  }
  meta_step(&dword_30048A0[9 * *(_WORD *)(v1 + 46)]);
  return v4;
}
