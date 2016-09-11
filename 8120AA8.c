int __fastcall sub_8120AA8(unsigned __int16 a1)
{
  const char *v1; // r6@1
  signed int v2; // r2@1
  signed int v3; // r2@3
  int v5; // [sp+1Ch] [bp-4h]@0

  v1 = 0;
  v2039270 = (v2024A60 << 9) + 33700452;
  v2024C04 = *(_WORD *)((v2024A60 << 9) + 0x2023A68);
  v2024C06 = *(_BYTE *)((v2024A60 << 9) + 0x2023A6A);
  v2016003 = *(_BYTE *)((v2024A60 << 9) + 0x2023A6B);
  v201605E = *(_BYTE *)((v2024A60 << 9) + 0x2023A6C);
  v20160C1 = *(_BYTE *)((v2024A60 << 9) + 0x2023A6D);
  v2024C0B = *(_BYTE *)((v2024A60 << 9) + 0x2023A6E);
  v20160A0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A6F);
  v2 = 0;
  do
  {
    *(_BYTE *)(v2 + 33788524) = *(_BYTE *)(v2039270 + 12 + v2);
    ++v2;
  }
  while ( v2 <= 3 );
  v3 = 0;
  do
  {
    byte_30041C0[v3] = *(_BYTE *)(v2039270 + 16 + v3);
    byte_3004290[v3] = *(_BYTE *)(v2039270 + 32 + v3);
    byte_30042B0[v3] = *(_BYTE *)(v2039270 + 48 + v3);
    ++v3;
  }
  while ( v3 <= 15 );
  if ( a1 <= 5u )
  {
    switch ( a1 )
    {
      case 0u:
        if ( v20239F8 & 8 )
        {
          if ( v20239F8 & 2 )
          {
            v1 = (const char *)&gUnknown_084005C7;
            if ( v20239F8 & 0x40 )
              v1 = (const char *)&gUnknown_084005DB;
          }
          else
          {
            v1 = (const char *)&gUnknown_084005AA;
          }
        }
        else if ( v20239F8 & 0x2000 )
        {
          v1 = "ÑİàØ";
        }
        else if ( v20239F8 & 1 )
        {
          v1 = "ÑİàØ";
        }
        else
        {
          v1 = "ÑİàØ";
          if ( v20239F8 & 0x200 )
            v1 = "ÑİàØ";
        }
        goto _08120F70;
      case 1u:
        if ( battle_side_get_owner(v2024A60) << 24 )
        {
          if ( v20239F8 & 1 )
          {
            if ( v20239F8 & 0x40 )
            {
              v1 = (const char *)&gUnknown_0840065C;
            }
            else
            {
              v1 = (const char *)&gUnknown_08400608;
              if ( v20239F8 & 2 )
                v1 = (const char *)&gUnknown_08400645;
            }
          }
          else
          {
            v1 = (const char *)&gUnknown_084005F5;
            if ( v20239F8 & 2 )
              v1 = (const char *)&gUnknown_08400635;
          }
        }
        else if ( v20239F8 & 1 )
        {
          v1 = (const char *)&gUnknown_084006A4;
          if ( v20239F8 & 0x40 )
            v1 = (const char *)&gUnknown_084006F1;
        }
        else
        {
          v1 = (const char *)&gUnknown_0840069C;
        }
        goto _08120F70;
      case 2u:
        if ( battle_side_get_owner(v2024A60) << 24 )
        {
          if ( v202FF5E == 2048 )
          {
            v1 = (const char *)&gUnknown_08400771;
            if ( v20239F8 & 0x40 )
              v1 = (const char *)&gUnknown_08400781;
          }
          else
          {
            v1 = (const char *)&gUnknown_0840075E;
          }
        }
        else if ( v20160C1 )
        {
          if ( v20160C1 == 1 || v20239F8 & 1 )
          {
            v1 = (const char *)&gUnknown_08400727;
          }
          else
          {
            v1 = (const char *)&gUnknown_08400749;
            if ( v20160C1 == 2 )
              v1 = (const char *)&gUnknown_08400736;
          }
        }
        else
        {
          v1 = (const char *)&gUnknown_08400709;
        }
        goto _08120F70;
      case 3u:
        if ( battle_side_get_owner(v2016003) << 24 )
        {
          if ( v20239F8 & 2 )
          {
            v1 = (const char *)&gUnknown_0840067C;
            if ( v20239F8 & 0x40 )
              v1 = (const char *)&gUnknown_0840068C;
          }
          else
          {
            v1 = (const char *)&gUnknown_08400622;
          }
        }
        else if ( v20160C1 && !(v20239F8 & 1) )
        {
          if ( v20160C1 == 1 )
          {
            v1 = (const char *)&gUnknown_084006BB;
          }
          else
          {
            v1 = "Óãéæ";
            if ( v20160C1 == 2 )
              v1 = (const char *)&gUnknown_084006C6;
          }
        }
        else
        {
          v1 = (const char *)&gUnknown_084006B3;
        }
        goto _08120F70;
      case 4u:
        sub_8121D1C(byte_30041C0);
        if ( (unsigned int)*v2039270 <= 0x162 )
          StringCopy(byte_3004290, &gMoveNames[13 * *v2039270]);
        else
          StringCopy(byte_3004290, *(&gUnknown_08401674 + v20160A0));
        sub_8121D74(byte_3004290);
        v1 = (const char *)&gUnknown_084007BD;
        goto _08120F70;
      case 5u:
        if ( byte_30041C0[0] & 0x80 )
        {
          byte_30041C0[0] &= 0x7Fu;
          if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 && byte_30041C0[0] != 3 )
            byte_30041C0[0] ^= 3u;
          if ( (((unsigned __int8)byte_30041C0[0] - 2) & 0xFFu) > 1 )
          {
            v1 = (const char *)&gUnknown_083FFFEA;
            if ( v20239F8 & 0x40 )
              v1 = (const char *)&gUnknown_083FFFF7;
          }
          else
          {
            v1 = (const char *)&gUnknown_083FFEFC;
          }
        }
        else
        {
          if ( (unsigned __int8)battle_side_get_owner(v2024A60) == 1 && byte_30041C0[0] != 3 )
            byte_30041C0[0] ^= 3u;
          if ( v20239F8 & 0x40 )
          {
            if ( byte_30041C0[0] == 2 )
            {
              v1 = "ÊàÕíÙæ";
            }
            else if ( (signed int)(unsigned __int8)byte_30041C0[0] > 2 )
            {
              if ( byte_30041C0[0] == 3 )
                v1 = "ÊàÕíÙæ";
            }
            else if ( byte_30041C0[0] == 1 )
            {
              v1 = "ÊàÕíÙæ";
            }
          }
          else if ( byte_30041C0[0] == 2 )
          {
            v1 = "ÊàÕíÙæ";
          }
          else if ( (signed int)(unsigned __int8)byte_30041C0[0] > 2 )
          {
            if ( byte_30041C0[0] == 3 )
              v1 = "ÊàÕíÙæ";
          }
          else if ( byte_30041C0[0] == 1 )
          {
            v1 = "ÊàÕíÙæ";
          }
        }
        goto _08120F70;
      default:
        break;
    }
  }
  if ( a1 <= 0x16Au )
  {
    v1 = (const char *)*(&gUnknown_08400F8C + a1 - 12);
_08120F70:
    get_battle_strings_(v1);
  }
  else
  {
    v20238CC = -1;
  }
  return v5;
}
