signed int __fastcall sub_810D9EC(_BYTE *a1, _BYTE *a2, _WORD *a3, _WORD *a4)
{
  _BYTE *v4; // r8@1
  _BYTE *v5; // r5@1
  _WORD *v6; // r6@1
  _WORD *v7; // r7@1
  __int16 *v8; // r4@1
  unsigned int v9; // r0@1
  unsigned int v11; // r0@7
  __int16 v12; // r0@8
  unsigned int v13; // r0@12
  __int16 v14; // r1@13
  signed __int16 v15; // r0@13

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = (__int16 *)GetVarPointer(0x404Au);
  v9 = *(_WORD *)GetVarPointer(0x40B4u) - 1;
  if ( v9 <= 9 )
  {
    switch ( v9 )
    {
      case 0u:
      case 7u:
        return 1;
      case 2u:
      case 8u:
        return 4;
      case 3u:
      case 4u:
        return 2;
      case 5u:
      case 9u:
        return 3;
      case 1u:
        v11 = (unsigned __int16)*v8;
        if ( v11 > 0x3B )
        {
          if ( v11 > 0x8B )
          {
            *v5 = 47;
            v12 = *v8 - 140;
          }
          else
          {
            *v5 = 48;
            v12 = *v8 - 60;
          }
        }
        else
        {
          *v5 = 49;
          v12 = *v8 + 19;
        }
        break;
      case 6u:
        v13 = (unsigned __int16)*v8;
        if ( v13 > 0x41 )
        {
          if ( v13 > 0x91 )
          {
            *v5 = 49;
            v14 = *v8;
            v15 = 224;
          }
          else
          {
            *v5 = 48;
            v14 = *v8;
            v15 = 145;
          }
        }
        else
        {
          *v5 = 47;
          v14 = *v8;
          v15 = 65;
        }
        v12 = v15 - v14;
        break;
      default:
        goto def_810DA18;
    }
    *v6 = v12;
  }
def_810DA18:
  *v4 = 0;
  *v7 = 20;
  return 0;
}
