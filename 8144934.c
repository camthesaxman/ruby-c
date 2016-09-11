int __fastcall sub_8144934(unsigned __int8 a1)
{
  int v1; // r2@1
  unsigned int v2; // r0@1
  int *v3; // r2@3
  int *v4; // r3@4
  int *v5; // r2@7
  int *v6; // r3@8
  int *v7; // r2@10
  int v8; // r1@10
  int v10; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
  if ( v2 > 4 )
  {
def_8144956:
    v3 = &dword_3004B20[10 * v1];
    if ( *((_WORD *)v3 + 5) != 0x7FFF )
    {
      v4 = &dword_3004B20[10 * *((_WORD *)v3 + 6)];
      if ( LOWORD(dword_3004B20[10 * *((_WORD *)v4 + 19) + 3]) == 2 )
      {
        LOWORD(dword_3004B20[10 * *((_WORD *)v4 + 5) + 2]) = 20;
        *((_WORD *)v3 + 5) = 0x7FFF;
      }
    }
_081449B8:
    sub_8149020(0);
  }
  else
  {
    switch ( v2 )
    {
      default:
        goto def_8144956;
      case 1u:
        goto _081449B8;
      case 2u:
        v5 = &dword_3004B20[10 * v1];
        if ( *((_WORD *)v5 + 5) != 0x7FFF )
        {
          v6 = &dword_3004B20[10 * HIWORD(dword_3004B20[10 * *((_WORD *)v5 + 6) + 2])];
          if ( (*((_WORD *)v6 + 9) & 0xFF80) == 640 )
          {
            *((_WORD *)v6 + 4) = 1;
            *((_WORD *)v5 + 5) = 0x7FFF;
          }
        }
        goto _08144A54;
      case 3u:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 5);
        if ( v8 != 0x7FFF )
        {
          if ( v8 == 499 )
          {
            LOWORD(dword_3004B20[10 * HIWORD(dword_3004B20[10 * *((_WORD *)v7 + 6) + 2]) + 2]) = 10;
            *((_WORD *)v7 + 5) = 0x7FFF;
          }
          else
          {
            ++*((_WORD *)v7 + 5);
          }
        }
_08144A54:
        sub_8149020(1);
        break;
      case 4u:
        sub_8149020(2);
        break;
    }
  }
  return v10;
}
