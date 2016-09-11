int __fastcall StringLength(_BYTE *a1)
{
  _BYTE *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@2

  v1 = a1;
  v2 = 0;
  if ( *a1 != 255 )
  {
    do
    {
      v3 = v2;
      v2 = (v2 + 1) & 0xFFFF;
      if ( v1[v3] == 252 )
        v2 = (v2 + (unsigned __int8)GetExtCtrlCodeLength(v1[v2])) & 0xFFFF;
    }
    while ( v1[v2] != 255 );
  }
  return v2;
}
