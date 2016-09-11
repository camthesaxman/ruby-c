int __fastcall sub_80C42C0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r12@1
  signed int v2; // r6@1
  signed int v3; // r9@1
  int *v4; // r0@1
  int v5; // r5@1
  __int16 v6; // r7@1
  int v7; // r4@2
  _WORD *v8; // r3@6
  __int16 v9; // r2@6
  __int16 v10; // r0@12
  int v11; // r2@17
  _WORD *v12; // r6@17
  int v13; // r5@17
  int v14; // r3@18
  int v15; // r4@18
  unsigned int v16; // r0@19
  signed int v17; // r0@21
  signed __int16 v18; // r3@26
  int v20; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = 0;
  v4 = &dword_3004B20[10 * a1];
  v5 = *((_BYTE *)v4 + 8);
  v6 = *((_WORD *)v4 + 5);
  if ( *((_WORD *)v4 + 6) )
  {
    v7 = 2 * v5;
    if ( (signed int)*(_WORD *)(2 * v5 + 0x201800C) > 0 )
      goto _080C4328;
  }
  else
  {
    v7 = 2 * v5;
    if ( (signed int)*(_WORD *)(2 * v5 + 0x201800C) <= 87 )
      goto _080C4328;
  }
  v2 = 1;
_080C4328:
  v8 = (_WORD *)(v7 + 33652748);
  v9 = *(_WORD *)(v7 + 33652748);
  if ( *(_WORD *)(v7 + 33652748) == v6 )
    v3 = 1;
  if ( !v3 )
  {
    if ( v2 )
    {
      *v8 = v6;
    }
    else
    {
      if ( *((_WORD *)v4 + 6) )
        v10 = v9 - 1;
      else
        v10 = v9 + 1;
      *v8 = v10;
    }
  }
  if ( !v2 )
  {
    if ( v3 )
    {
_080C43CE:
      --v2018014;
      DestroyTask(v1);
      return v20;
    }
    v11 = 0;
    v12 = (_WORD *)(v7 + 33652748);
    v13 = 32 * (v7 + v5);
    do
    {
      v14 = *v12;
      v15 = v11 + 1;
      if ( v14 < 8 * (v11 + 1) )
      {
        if ( v14 < 8 * v11 )
        {
          v16 = 0;
        }
        else
        {
          v17 = *v12;
          if ( v14 < 0 )
            v17 = v14 + 7;
          v16 = (v14 - 8 * (v17 >> 3)) & 0xFF;
        }
      }
      else
      {
        v16 = 8;
      }
      if ( v16 > 3 )
        v18 = 20567;
      else
        v18 = 20556;
      *(_WORD *)(2 * (v13 + v11++) + 0x600E18E) = v16 + v18;
    }
    while ( v15 <= 10 );
  }
  if ( v3 )
    goto _080C43CE;
  return v20;
}
