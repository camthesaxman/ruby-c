int __fastcall sub_806DB90(_BYTE *a1, int a2, int a3)
{
  _BYTE *v3; // r6@1
  int v4; // r7@1
  unsigned int v5; // r5@4
  unsigned __int16 v6; // r0@5
  int v7; // r3@5
  unsigned __int8 v8; // r4@6
  char v9; // r0@6
  unsigned int i; // r5@9
  unsigned __int16 v11; // r0@10
  int v12; // r3@10
  unsigned __int8 v13; // r4@11
  char v14; // r0@11
  int v16; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  a3 = (unsigned __int8)a3;
  if ( (_BYTE)a3 )
  {
    if ( a3 == 1 )
    {
      for ( i = 0; i < v3[1]; i = (i + 1) & 0xFFFF )
      {
        v11 = GetMonData((int)&unk_30045C0 + 100 * i, 12, a3);
        if ( v11 )
        {
          v13 = *(_BYTE *)(i + v4 + 6);
          v14 = itemid_is_mail(v11, v11, a3, v12);
          sub_806DB0C(v13, v14);
        }
      }
    }
  }
  else
  {
    v5 = 0;
    if ( (unsigned int)*a1 > 0 )
    {
      do
      {
        v6 = GetMonData((int)&dword_3004360[25 * v5], 12, a3);
        if ( v6 )
        {
          v8 = *(_BYTE *)(v4 + v5);
          v9 = itemid_is_mail(v6, v6, a3, v7);
          sub_806DB0C(v8, v9);
        }
        v5 = (v5 + 1) & 0xFFFF;
      }
      while ( v5 < *v3 );
    }
  }
  return v16;
}
