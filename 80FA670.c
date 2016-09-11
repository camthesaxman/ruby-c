unsigned int __fastcall atk90_changetypestoenemyattacktype(_BYTE *a1, _WORD *a2, signed int a3)
{
  _BYTE *v3; // r3@1
  _WORD *v4; // r5@1
  unsigned int v5; // r1@7
  unsigned int v6; // r0@7
  unsigned int v7; // r3@9
  unsigned int v8; // r2@9
  unsigned int v9; // r1@10
  unsigned int v10; // r0@10
  unsigned int v11; // r4@11
  unsigned int v12; // r2@11
  unsigned int v14; // r1@16
  unsigned int v15; // r0@16
  unsigned int v16; // r4@18
  unsigned int v17; // r2@18
  unsigned int v18; // r1@20
  unsigned int v19; // r0@20
  unsigned int v20; // r1@22
  unsigned int v21; // r0@22
  unsigned int v22; // r1@24
  unsigned int v23; // r0@24

  v3 = a1;
  v4 = a2;
  a3 = (unsigned __int8)a3;
  if ( (unsigned __int8)a3 != 1 )
  {
    if ( a3 > 1 )
    {
      if ( a3 != 2 )
        return Random() & 1;
      v14 = *a1 << 25;
      v15 = *(_BYTE *)v4 << 25;
      if ( v14 > v15 )
        return 1;
      if ( v14 >= (unsigned int)*(_BYTE *)v4 << 25 )
      {
        v16 = *(_WORD *)v3 << 18;
        v17 = *v4 << 18;
        if ( v16 >> 25 > v17 >> 25 )
          return 1;
        if ( (unsigned int)*(_WORD *)v3 << 18 >> 25 >= (unsigned int)*v4 << 18 >> 25 )
        {
          v18 = *((_WORD *)v3 + 1);
          v19 = v4[1];
          if ( v18 > v19 )
            return 1;
          if ( v18 >= v19 )
          {
            v20 = *((_WORD *)v3 + 2);
            v21 = v4[2];
            if ( v20 > v21 )
              return 1;
            if ( v20 >= v21 )
            {
              v22 = *((_WORD *)v3 + 3);
              v23 = v4[3];
              if ( v22 > v23 || v22 >= v23 )
                return 1;
            }
          }
        }
      }
    }
    else
    {
      if ( a3 )
        return Random() & 1;
      v5 = *a1 << 25;
      v6 = *(_BYTE *)v4 << 25;
      if ( v5 > v6 )
        return 1;
      if ( v5 >= (unsigned int)*(_BYTE *)v4 << 25 )
      {
        v7 = *(_WORD *)v3 << 18;
        v8 = *v4 << 18;
        if ( v7 >> 25 <= v8 >> 25 )
        {
          v9 = v7 >> 25;
          v10 = (unsigned int)*v4 << 18 >> 25;
          goto _080FA6DA;
        }
        return 1;
      }
    }
    return 0;
  }
  v11 = *(_WORD *)a1 << 18;
  v12 = *a2 << 18;
  if ( v11 >> 25 > v12 >> 25 )
    return 1;
  if ( (unsigned int)*(_WORD *)a1 << 18 >> 25 < (unsigned int)*a2 << 18 >> 25 )
    return 0;
  v9 = *a1 << 25;
  v10 = *(_BYTE *)v4 << 25;
  if ( v9 > v10 )
    return 1;
_080FA6DA:
  if ( v9 < v10 )
    return 0;
  return Random() & 1;
}
