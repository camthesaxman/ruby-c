_BOOL4 __fastcall sub_8042548(_BYTE *a1, unsigned __int8 a2)
{
  int v2; // r3@1
  char v4; // [sp+0h] [bp-10h]@1
  char v5; // [sp+1h] [bp-Fh]@1

  v5 = 0;
  v4 = 0;
  v2 = 0;
  if ( *a1 != 255 )
  {
    do
    {
      if ( a1[v2] == 181 )
        ++v4;
      if ( a1[v2] == 182 )
        ++v5;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( a1[v2] != 255 );
  }
  return !a2 && v4 && !v5 || a2 == 254 && v5 && !v4;
}
