int __fastcall SkipExtCtrlCodes(_BYTE *a1)
{
  _BYTE *v1; // r5@1
  int v2; // r4@1
  int v3; // r6@1
  int v4; // r2@4
  int v5; // r1@4
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 0;
  if ( *a1 != 255 )
  {
    do
    {
      if ( v1[v2] == 252 )
      {
        v2 = (((v2 + 1) & 0xFFFF) + (unsigned __int8)GetExtCtrlCodeLength(v1[(v2 + 1) & 0xFFFF])) & 0xFFFF;
      }
      else
      {
        v4 = v3;
        v3 = (v3 + 1) & 0xFFFF;
        v5 = v2;
        v2 = (v2 + 1) & 0xFFFF;
        v1[v4] = v1[v5];
      }
    }
    while ( v1[v2] != 255 );
  }
  v1[v3] = -1;
  return v7;
}
