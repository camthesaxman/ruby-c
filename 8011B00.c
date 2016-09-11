int sub_8011B00()
{
  int v0; // r9@1
  signed int v1; // r5@3
  _BYTE *i; // r3@3
  int j; // r5@5
  int v4; // r4@6
  int v5; // r0@8
  unsigned __int8 v6; // r0@19
  _BYTE *v7; // r3@23
  _BYTE *v8; // ST04_4@24
  int v9; // r0@24
  unsigned __int8 v10; // r0@26
  int v11; // r5@29
  signed int v12; // r5@31
  _WORD *v13; // r3@31
  _BYTE *v14; // r2@31
  int v15; // r0@33
  _BYTE *v16; // r0@33
  signed int v17; // r5@35
  _DWORD *v18; // r1@36
  _BYTE *v20; // [sp+4h] [bp-20h]@8
  int v21; // [sp+20h] [bp-4h]@0

  v0 = 0;
  if ( !v2024A64 )
  {
    if ( !v2016058 )
    {
      v1 = 0;
      for ( i = (_BYTE *)33704552; v1 < v2024A68; ++v1 )
        *(_BYTE *)(v1 + 33704570) = v1;
      for ( j = 0; j < *i - 1; ++j )
      {
        v4 = j + 1;
        if ( j + 1 < *i )
        {
          i = (_BYTE *)33704552;
          do
          {
            v20 = i;
            v5 = b_first_side(*(_BYTE *)(j + 33704570), *(_BYTE *)(v4 + 33704570), 1);
            i = v20;
            if ( v5 << 24 )
            {
              sub_8012FBC((unsigned __int8)j, (unsigned __int8)v4);
              i = v20;
            }
            ++v4;
          }
          while ( v4 < v2024A68 );
        }
      }
    }
    if ( v20160E6 || !(sub_8018324(0, 0, 0, 255) << 24) )
    {
      if ( v2016058 >= (unsigned int)v2024A68 )
      {
_08011C28:
        if ( !(unsigned __int8)sub_8018324(9, 0, 0, 0) && !(sub_8018324(11, 0, 0, 0) << 24) )
        {
          v7 = (_BYTE *)33704552;
          if ( v20160F9 >= (unsigned int)v2024A68 )
          {
_08011CA8:
            if ( *v7 )
            {
              v11 = *v7;
              do
                --v11;
              while ( v11 );
            }
            v12 = 0;
            v13 = (_WORD *)33705056;
            v14 = (_BYTE *)33644648;
            do
            {
              *v14 = 6;
              *(_BYTE *)(v12 + 33704984);
              *(_BYTE *)(v12 + 33704984) = -1;
              *v13 = 0;
              ++v13;
              ++v14;
              ++v12;
            }
            while ( v12 <= 3 );
            v15 = sub_801365C(0);
            sub_801377C(v15);
            v20160A6 = v2024C0C;
            dword_30042D4 = (int)sub_8012324;
            sub_80156DC(sub_8012324);
            v16 = (_BYTE *)33705253;
            do
              *v16-- = 0;
            while ( (signed int)v16 >= 33705246 );
            v17 = 0;
            if ( (signed int)v2024A68 > 0 )
            {
              v18 = (_DWORD *)33704656;
              do
              {
                *v18 &= 0xFFFFFFF7;
                v18 += 22;
                ++v17;
              }
              while ( v17 < v2024A68 );
            }
            v2016000 = 0;
            v2016001 = 0;
            v2016110 = 0;
            v2016111 = 0;
            v201600C = 0;
            v2016059 = 0;
            v201600E = 0;
            v2024C68 = 0;
            v2024D1C = Random(33644558);
          }
          else
          {
            while ( 1 )
            {
              v8 = v7;
              v9 = sub_801A02C(0, *(_BYTE *)(v20160F9 + 0x2024A7A), 0);
              v7 = v8;
              if ( v9 << 24 )
                v0 = (v0 + 1) & 0xFF;
              v10 = v20160F9++ + 1;
              if ( v0 )
                break;
              if ( v10 >= (unsigned int)v2024A68 )
                goto _08011CA8;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          if ( sub_8018324(0, *(_BYTE *)(v2016058 + 0x2024A7A), 0, 0) << 24 )
            v0 = (v0 + 1) & 0xFF;
          v6 = v2016058++ + 1;
          if ( v0 )
            break;
          if ( v6 >= (unsigned int)v2024A68 )
            goto _08011C28;
        }
      }
    }
    else
    {
      v20160E6 = 1;
    }
  }
  return v21;
}
