int __fastcall sub_813CCE8(unsigned __int8 a1)
{
  int v1; // r3@1
  unsigned int v2; // r0@1
  int *v3; // r0@3
  int *v4; // r2@4
  unsigned int v5; // r0@5
  signed __int16 v6; // r0@6
  int *v7; // r1@7
  __int16 v8; // r0@7
  int v10; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 > 4 )
  {
def_813CD0A:
    v4000050 = 16208;
    v4000052 = 4096;
    v4000054 = 0;
    v3 = &dword_3004B20[10 * v1];
    *((_WORD *)v3 + 5) = 64;
    *((_WORD *)v3 + 4) = 1;
  }
  else
  {
    switch ( v2 )
    {
      default:
        goto def_813CD0A;
      case 1u:
        v4 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v4 + 5) )
        {
          v5 = --*((_WORD *)v4 + 5);
          goto _0813CDC2;
        }
        v4000052 = gUnknown_08393E64[0];
        v6 = 128;
        goto _0813CDEA;
      case 2u:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 5);
        if ( *((_WORD *)v7 + 5) )
          goto _0813CE0E;
        *((_WORD *)v7 + 5) = 0;
        ++*((_WORD *)v7 + 4);
        return v10;
      case 3u:
        v4 = &dword_3004B20[10 * v1];
        if ( (signed int)*((_WORD *)v4 + 5) > 61 )
        {
          v4000052 = 4096;
          v6 = 16;
_0813CDEA:
          *((_WORD *)v4 + 5) = v6;
          ++*((_WORD *)v4 + 4);
        }
        else
        {
          v5 = ++*((_WORD *)v4 + 5);
_0813CDC2:
          v4000052 = *(__int16 *)((char *)gUnknown_08393E64 + ((v5 + (v5 >> 31)) & 0x1FE));
        }
        break;
      case 4u:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 5);
        if ( *((_WORD *)v7 + 5) )
        {
_0813CE0E:
          *((_WORD *)v7 + 5) = v8 - 1;
        }
        else
        {
          v4000050 = *((_WORD *)v7 + 5);
          v4000052 = 0;
          v4000054 = 0;
          DestroyTask(v1);
        }
        return v10;
    }
  }
  return v10;
}
