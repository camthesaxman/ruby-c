int sub_800BD54()
{
  signed int i; // r8@2
  _BYTE *v1; // r9@25
  char *v2; // r0@5
  int v3; // r4@7
  char *v4; // r4@13
  char *v5; // r0@14
  signed int v6; // r1@14
  int v7; // r7@22
  int v8; // r5@22
  int v10; // [sp+1Ch] [bp-4h]@0

  if ( !(v20239F8 & 0x40) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v2024A68 )
        return v10;
      v8 = 0;
      v1 = (_BYTE *)(i + 33704562);
      v7 = 0;
      while ( 1 )
      {
        if ( i <= 1 )
        {
          if ( *v1 & 1 )
            v2 = (char *)&unk_30045C0;
          else
            v2 = (char *)&unk_3004360;
          v3 = (int)&v2[v7];
          if ( GetMonData(&v2[v7], 57) && GetMonData(v3, 65) && GetMonData(v3, 65) != 412 && !GetMonData(v3, 45) )
          {
            *(_WORD *)(2 * i + 0x2024A6A) = v8;
            goto _0800BE7C;
          }
          goto _0800BE74;
        }
        if ( !(*v1 & 1) )
          break;
        v4 = (char *)&unk_30045C0 + v7;
        if ( GetMonData((char *)&unk_30045C0 + v7, 57) )
        {
          v5 = (char *)&unk_30045C0 + v7;
          v6 = 65;
          goto _0800BE30;
        }
_0800BE74:
        v7 += 100;
        if ( ++v8 > 5 )
          goto _0800BE7C;
      }
      v4 = (char *)&unk_3004360 + v7;
      if ( !GetMonData((char *)&unk_3004360 + v7, 57) )
        goto _0800BE74;
      v5 = (char *)&unk_3004360 + v7;
      v6 = 11;
_0800BE30:
      if ( !GetMonData(v5, v6)
        || GetMonData(v4, 65) == 412
        || GetMonData(v4, 45)
        || *(_WORD *)(2 * (i - 2) + 0x2024A6A) == v8 )
      {
        goto _0800BE74;
      }
      *(_WORD *)(2 * i + 0x2024A6A) = v8;
_0800BE7C:
      ;
    }
  }
  return v10;
}
