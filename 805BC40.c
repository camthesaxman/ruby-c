int __fastcall FieldObjectHandleDynamicGraphicsId(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_BYTE *)(a1 + 5);
  if ( v2 > 0xEF )
    *(_BYTE *)(v1 + 5) = VarGetFieldObjectGraphicsId((v2 + 16) & 0xFF);
  return v4;
}
