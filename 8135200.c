int __fastcall sub_8135200(unsigned __int16 a1, unsigned __int16 a2, int a3, char a4, unsigned __int8 a5, _WORD *a6, _WORD *a7, _BYTE *a8)
{
  int v8; // r4@1
  int v9; // r6@1
  int v10; // r2@1
  __int16 *v11; // r1@5
  int v12; // r0@6
  int v13; // r2@11
  int v14; // r3@11
  _WORD *v15; // r1@12
  int v16; // r2@17
  _WORD *v17; // r1@18
  int v19; // [sp+1Ch] [bp-4h]@0

  v8 = a1;
  v9 = a2;
  v10 = 0;
  if ( a1 != 412 && a1 )
  {
    if ( (unsigned __int16)gBattleTowerBanlist[0] != 0xFFFF )
    {
      if ( (unsigned __int16)gBattleTowerBanlist[0] == a1 )
      {
_08135258:
        if ( (unsigned __int16)gBattleTowerBanlist[v10] != 0xFFFF )
          return v19;
      }
      else
      {
        v11 = gBattleTowerBanlist;
        while ( 1 )
        {
          ++v11;
          ++v10;
          v12 = (unsigned __int16)*v11;
          if ( v12 == 0xFFFF )
            break;
          if ( v12 == v8 )
            goto _08135258;
        }
      }
    }
    if ( a4 || a5 <= 0x32u )
    {
      v13 = 0;
      v14 = *a8;
      if ( v14 > 0 )
      {
        v15 = a6;
        if ( *a6 != v8 )
        {
          do
          {
            ++v15;
            ++v13;
          }
          while ( v13 < v14 && *v15 != v8 );
        }
      }
      if ( v13 == v14 )
      {
        if ( !v9 )
          goto LABEL_26;
        v16 = 0;
        if ( v14 > 0 )
        {
          v17 = a7;
          if ( *a7 != v9 )
          {
            do
            {
              ++v17;
              ++v16;
            }
            while ( v16 < v14 && *v17 != v9 );
          }
        }
        if ( v16 == v14 )
        {
LABEL_26:
          a6[v14] = v8;
          a7[(*a8)++] = v9;
        }
      }
    }
  }
  return v19;
}
