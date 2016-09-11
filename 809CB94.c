int __fastcall unref_sub_809CB94(int a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v20384E4 == 1 )
  {
    memcpy(a1, &dword_3004360[25 * v20384E5], 80);
  }
  else
  {
    v2 = get_preferred_box();
    memcpy(v1, 80 * v20384E5 + 2400 * v2 + 33751204, 80);
  }
  return v4;
}
