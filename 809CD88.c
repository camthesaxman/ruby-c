int sub_809CD88()
{
  char v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = 0;
  if ( !v20384E9 )
    v0 = 1;
  v20384E9 = v0;
  *(_BYTE *)(v20011C0 + 5) = *(_BYTE *)(v20011C0 + 5) & 0xF | 16 * *(_BYTE *)((unsigned __int8)v0 + 0x20011E4);
  return v2;
}
