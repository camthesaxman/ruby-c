int sub_804AB30()
{
  signed int v0; // r4@1
  int *v1; // r3@1
  int v2; // r2@2
  unsigned int v3; // r0@5
  unsigned __int8 v4; // r0@7
  int v6; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v1 = &dword_3004824;
  do
  {
    v2 = *v1 + 8 * v0;
    if ( *(_BYTE *)(v2 + 2268) )
    {
      if ( *(_WORD *)(v2 + 2270) )
      {
        --*(_WORD *)(v2 + 2270);
      }
      else
      {
        v3 = *(_BYTE *)(v2 + 2272);
        if ( v3 <= 5 )
        {
          switch ( v3 )
          {
            case 0u:
              v4 = bitmask_all_link_players_but_self();
              SendBlock(v4, (char *)(dword_3004824 + 140), 0x14u);
              break;
            case 1u:
              sub_804AA0C(0);
              break;
            case 2u:
              sub_804AA0C(2);
              break;
            case 3u:
            case 4u:
              sub_804AA0C(3);
              break;
            case 5u:
              sub_804AA0C(3);
              break;
            default:
              break;
          }
        }
        *(_BYTE *)(dword_3004824 + 8 * v0 + 2268) = 0;
        v1 = &dword_3004824;
      }
    }
    ++v0;
  }
  while ( v0 <= 3 );
  return v6;
}
