int __fastcall sub_80C05C4(int a1, int a2, int a3, int a4)
{
  int v4; // r10@1
  unsigned int v5; // r7@2
  int i; // r5@4
  int *v8; // [sp+0h] [bp-44h]@1
  int *v9; // [sp+4h] [bp-40h]@1
  int *v10; // [sp+8h] [bp-3Ch]@1
  int *v11; // [sp+Ch] [bp-38h]@1
  int v12; // [sp+10h] [bp-34h]@1
  int v13; // [sp+14h] [bp-30h]@1
  int v14; // [sp+18h] [bp-2Ch]@1
  int v15; // [sp+1Ch] [bp-28h]@1
  int v16; // [sp+20h] [bp-24h]@2
  int v17; // [sp+40h] [bp-4h]@11

  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v8 = &v12;
  v9 = &v13;
  v10 = &v14;
  v11 = &v15;
  byte_3000721 = GetLinkPlayerCount();
  v4 = 0;
  do
  {
    v5 = 0;
    v16 = v4 + 1;
    while ( v5 < (unsigned __int8)byte_3000721 )
    {
      byte_3000722 = sub_80C0730(*(&v8)[v5], v4);
      if ( byte_3000722 != -1 )
      {
        for ( i = 0; i < (unsigned __int8)byte_3000721 - 1; i = (i + 1) & 0xFF )
        {
          byte_3005D38 = sub_80BEBC8(*(&v8)[(signed int)(v5 + i + 1) % (unsigned __int8)byte_3000721]);
          if ( byte_3005D38 != -1 )
            sub_80C06BC((&v8)[(signed int)(v5 + i + 1) % (unsigned __int8)byte_3000721], (&v8)[v5]);
        }
      }
      v5 = (unsigned __int8)(v5 + 1);
    }
    v4 = (unsigned __int8)v16;
  }
  while ( (unsigned __int8)v16 <= 0xFu );
  return v17;
}
