int sub_8049C8C()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !(GetMultiplayerId() << 24) )
  {
    sub_8049E9C(*(_BYTE *)(dword_3004824 + 65));
    sub_8049E9C(*(_BYTE *)(dword_3004824 + 138));
  }
  *(_BYTE *)(dword_3004824 + 123) = 7;
  return v1;
}
