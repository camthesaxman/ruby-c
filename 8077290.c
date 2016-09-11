int __fastcall c3_08073CEC(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r7@1
  int *v3; // r2@1
  __int16 v4; // r0@1
  int v5; // r6@2
  signed int v6; // r3@2
  int v7; // r1@2
  int v8; // r4@2
  unsigned int v9; // r2@3
  signed int v10; // r0@4
  int v12; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 12);
  *((_WORD *)v3 + 12) = v4 + 1;
  if ( v4 >= (signed int)*((_WORD *)v3 + 7) )
  {
    *((_WORD *)v3 + 12) = 0;
    v5 = *((_WORD *)v3 + 4);
    v6 = *((_WORD *)v3 + 5);
    v7 = *((_WORD *)v3 + 6);
    v8 = (*((_WORD *)v3 + 8) + v7) & 0xFFFF;
    *((_WORD *)v3 + 8) += v7;
    if ( v7 )
    {
      v10 = v6 << 16;
      v6 = (signed __int16)v6;
      v9 = v10;
      if ( v5 << 16 >= v10 )
      {
        if ( (signed __int16)v8 <= v6 )
          v2 = 1;
      }
      else if ( (signed __int16)v8 >= v6 )
      {
        goto _080772FC;
      }
      if ( !v2 )
      {
_0807730C:
        sub_8075560(v8);
        return v12;
      }
    }
    else
    {
      v9 = v6 << 16;
    }
_080772FC:
    v8 = v9 >> 16;
    DestroyTask(v1);
    --v202F7B3;
    goto _0807730C;
  }
  return v12;
}
