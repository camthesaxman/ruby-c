int atk73_cmd73()
{
  int v0; // r0@2
  int v1; // r4@2
  int v2; // r0@2
  char v3; // r1@8
  int v5; // [sp+8h] [bp-4h]@0

  if ( !(v20239F8 & 1) )
  {
    v0 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    v2024A60 = v0;
    v1 = *(_WORD *)(88 * ((v0 ^ 1) & 0xFF) + 0x2024AA8);
    v2 = 100 * v1 / *(_WORD *)(88 * ((v0 ^ 1) & 0xFF) + 0x2024AAC);
    if ( !v2 )
      v2 = 1;
    if ( v2 <= 69 && v1 )
    {
      if ( v2 <= 39 )
      {
        if ( v2 <= 9 )
          v3 = 3;
        else
          v3 = 2;
      }
      else
      {
        v3 = 1;
      }
      v20160C1 = v3;
    }
    else
    {
      v20160C1 = 0;
    }
  }
  v2024C10 += 2;
  return v5;
}
