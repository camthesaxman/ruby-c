_BOOL4 sub_8008224()
{
  int v0; // r5@1
  int v1; // r2@1
  int *v2; // r4@2
  int *v3; // r3@2

  v0 = 0;
  v1 = (unsigned __int8)gSavedLinkPlayerCount;
  if ( (signed int)(unsigned __int8)gSavedLinkPlayerCount > 0 )
  {
    v2 = &dword_3002FD4;
    v3 = dword_3002974;
    do
    {
      if ( *v3 == *v2 )
        ++v0;
      v2 += 7;
      v3 += 7;
      --v1;
    }
    while ( v1 );
  }
  return v0 == (unsigned __int8)gSavedLinkPlayerCount;
}
