int __fastcall sub_8046AD0(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  __int16 v3; // r6@1
  char v4; // r3@1
  int v5; // r5@1
  unsigned int v6; // r0@1
  int *v7; // r1@3
  int *v8; // r0@7
  int *v9; // r1@8
  __int16 v10; // r2@8
  int *v11; // r0@11
  int *v12; // r1@15
  int v14; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 12);
  v4 = *((_BYTE *)v2 + 10);
  v5 = *((_WORD *)v2 + 4);
  v6 = *((_WORD *)v2 + 19);
  if ( v6 > 0x20 )
  {
def_8046AF8:
    v7 = &dword_3004B20[10 * v1];
    if ( (signed int)*((_WORD *)v7 + 12) > 2 )
      *((_WORD *)v7 + 19) = v3 + 1;
    else
      ++*((_WORD *)v7 + 12);
  }
  else
  {
    switch ( v6 )
    {
      default:
        goto def_8046AF8;
      case 1u:
        cry_related(v5, v4);
        goto _08046BEE;
      case 2u:
        sub_8075398();
        v8 = &dword_3004B20[10 * v1];
        *((_WORD *)v8 + 14) = 3;
        *((_WORD *)v8 + 19) = 20;
        return v14;
      case 0x14u:
        v9 = &dword_3004B20[10 * v1];
        v10 = *((_WORD *)v9 + 14);
        if ( *((_WORD *)v9 + 14) )
          goto _08046C5A;
        sub_8075114(v5, v4, 1);
_08046BEE:
        DestroyTask(v1);
        return v14;
      case 3u:
        v11 = &dword_3004B20[10 * v1];
        *((_WORD *)v11 + 14) = 6;
        *((_WORD *)v11 + 19) = 30;
        return v14;
      case 0x1Eu:
        v9 = &dword_3004B20[10 * v1];
        v10 = *((_WORD *)v9 + 14);
        if ( *((_WORD *)v9 + 14) )
          goto _08046C5A;
        ++*((_WORD *)v9 + 19);
        goto _08046C20;
      case 0x1Fu:
_08046C20:
        if ( !(sub_80753C4() << 24) )
        {
          sub_8075398();
          v12 = &dword_3004B20[10 * v1];
          *((_WORD *)v12 + 14) = 3;
          ++*((_WORD *)v12 + 19);
        }
        break;
      case 0x20u:
        v9 = &dword_3004B20[10 * v1];
        v10 = *((_WORD *)v9 + 14);
        if ( *((_WORD *)v9 + 14) )
        {
_08046C5A:
          *((_WORD *)v9 + 14) = v10 - 1;
        }
        else
        {
          sub_8075114(v5, v4, 0);
          DestroyTask(v1);
        }
        break;
    }
  }
  return v14;
}
