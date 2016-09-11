int sub_804997C()
{
  unsigned int v0; // r1@2
  int v2; // [sp+8h] [bp-4h]@0

  if ( !(v202F38F & 0x80) )
  {
    v0 = *(_BYTE *)(dword_3004824 + 65);
    if ( v0 > 5 )
      sub_809D8BC(&unk_30045C0, (v0 - 6) & 0xFF, (*(_BYTE *)(dword_3004824 + 67) - 1) & 0xFF, sub_80484F4);
    else
      sub_809D8BC(
        dword_3004360,
        *(_BYTE *)(dword_3004824 + 65),
        (*(_BYTE *)(dword_3004824 + 66) - 1) & 0xFF,
        sub_80484F4);
  }
  return v2;
}
