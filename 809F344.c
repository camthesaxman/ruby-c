signed int __fastcall sub_809F344(unsigned __int8 a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = a1;
  while ( 1 )
  {
    v3 = (v3 + 1) & 0xFF;
    if ( v3 == 6 )
      break;
    if ( (unsigned __int8)sub_809F310(
                            (int)&dword_3004360[25 * (unsigned __int8)gUnknown_083C15A8[v3]],
                            (int)dword_3004360,
                            a3) == 1 )
      return gUnknown_083C15A8[v3];
  }
  return -1;
}
