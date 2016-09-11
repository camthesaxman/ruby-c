int __fastcall sub_809BDD8(char a1)
{
  unsigned __int8 v1; // r0@6
  char v3; // [sp+0h] [bp-Ch]@1
  int v4; // [sp+8h] [bp-4h]@7

  v3 = a1;
  v20011F7 = a1;
  if ( v20384E6 )
  {
    SetMonData(33564084, 8, (int)&v3);
  }
  else
  {
    if ( v20384E4 == 1 )
      SetMonData((int)&dword_3004360[25 * v20384E5], 8, (int)&v3);
    if ( !v20384E4 )
    {
      v1 = get_preferred_box();
      SetBoxMonData((unsigned int *)(2400 * v1 + 80 * v20384E5 + 33751204), 8, (int)&v3);
    }
  }
  return v4;
}
