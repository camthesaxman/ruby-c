int sub_80133C8()
{
  signed int v0; // r3@1
  signed int v1; // r3@15
  signed int k; // r5@15
  int v3; // r1@21
  int v4; // r1@25
  int i; // r5@28
  int j; // r4@29
  int v7; // r2@30
  int v8; // r0@31
  int v10; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  if ( v20239F8 & 0x80 )
  {
    v2024A60 = 0;
    if ( v2024A68 > 0u )
    {
      do
      {
        *(_BYTE *)(v0 + 33704566) = *(_BYTE *)(v2024A60 + 0x2024C18);
        *(_BYTE *)(v0++ + 33704570) = v2024A60++;
      }
      while ( v2024A60 < (unsigned int)v2024A68 );
    }
_08013622:
    dword_30042D4 = (int)bc_80154A0;
    v201601D = 0;
    return v10;
  }
  if ( !(v20239F8 & 2) )
  {
    if ( v2024C18 != 3 )
      goto _08013494;
    v2024A60 = 0;
    goto _08013492;
  }
  v2024A60 = 0;
  if ( v2024A68 <= 0u )
    goto _08013494;
  if ( v2024C18 == 3 )
  {
_08013492:
    v0 = 5;
    goto _08013494;
  }
  while ( 1 )
  {
    ++v2024A60;
    if ( v2024A60 >= (unsigned int)v2024A68 )
      break;
    if ( *(_BYTE *)(v2024A60 + 0x2024C18) == 3 )
      goto _08013492;
  }
_08013494:
  if ( v0 != 5 )
  {
    v2024A60 = 0;
    if ( v2024A68 )
    {
      do
      {
        v3 = *(_BYTE *)(v2024A60 + 0x2024C18);
        if ( ((v3 - 1) & 0xFFu) <= 1 )
        {
          *(_BYTE *)(v0 + 33704566) = v3;
          *(_BYTE *)(v0++ + 33704570) = v2024A60;
        }
        ++v2024A60;
      }
      while ( v2024A60 < (unsigned int)v2024A68 );
    }
    v2024A60 = 0;
    if ( v2024A68 )
    {
      do
      {
        v4 = *(_BYTE *)(v2024A60 + 0x2024C18);
        if ( ((v4 - 1) & 0xFFu) > 1 )
        {
          *(_BYTE *)(v0 + 33704566) = v4;
          *(_BYTE *)(v0++ + 33704570) = v2024A60;
        }
        ++v2024A60;
      }
      while ( v2024A60 < (unsigned int)v2024A68 );
    }
    for ( i = 0; i < v2024A68 - 1; ++i )
    {
      for ( j = i + 1; j < v2024A68; ++j )
      {
        v7 = *(_BYTE *)(i + 33704566);
        if ( v7 != 1 )
        {
          v8 = *(_BYTE *)(j + 33704566);
          if ( v8 != 1
            && v7 != 2
            && v8 != 2
            && b_first_side(*(_BYTE *)(i + 33704570), *(_BYTE *)(j + 33704570), 0) << 24 )
          {
            sub_8012FBC((unsigned __int8)i, (unsigned __int8)j);
          }
        }
      }
    }
    goto _08013622;
  }
  v2024A76 = *(_BYTE *)(v2024A60 + 0x2024C18);
  v2024A7A = v2024A60;
  v1 = 1;
  for ( k = 0; k < v2024A68; ++k )
  {
    if ( k != v2024A60 )
    {
      *(_BYTE *)(v1 + 33704566) = *(_BYTE *)(k + 33704984);
      *(_BYTE *)(v1++ + 33704570) = k;
    }
  }
  dword_30042D4 = (int)bc_80154A0;
  v201601D = 0;
  return v10;
}
